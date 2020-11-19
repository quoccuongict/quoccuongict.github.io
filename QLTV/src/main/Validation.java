/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

import java.util.ArrayList;
import models.QLMuonSach;

/**
 *
 * @author Quoc Cuong
 */
public class Validation {
    private boolean isEmptyThemSach(String tenSach, String tacGia, String namXb, String soLuong){
        if(tenSach.isEmpty() || tacGia.isEmpty() || namXb.isEmpty() || soLuong.isEmpty()){
            return true;
        }
        return false;
    }
    
    private boolean isNumberic(String s){
        if(s == null) return false;
        try {
            Double d = Double.parseDouble(s);
        } catch (Exception e) {
            return false;
        }
        return true;
    }
    
    public String getMassageErrorThemSach(String tenSach, String tacGia, String namXb, String soLuong){
        if(isEmptyThemSach(tenSach, tacGia, namXb, soLuong)){
            return "Khong duoc bo trong";
        }
        else{
            if(!isNumberic(namXb) || !isNumberic(soLuong)){
                return "Nam xuat ban va so luong phai la so";
            }
        }
        return "OK";
    }
    
    public boolean isValidThemSach(String tenSach, String tacGia, String namXb, String soLuong){
        if(!isEmptyThemSach(tenSach, tacGia, namXb, soLuong) && isNumberic(namXb) && isNumberic(soLuong)){
            return true;
        }
        return false;
    }
    
    private boolean isEmptyThemBanDoc(String hoTen, String diaChi, String soDT){
        if(hoTen.isEmpty() || diaChi.isEmpty() || soDT.isEmpty()){
            return true;
        }
        return false;
    }
    
    private boolean isNumberPhone(String s){
        if(s == null) return false;
        try {
            Double d = Double.parseDouble(s);
        } catch (Exception e) {
            return false;
        }
        return true;
    }
    
    public boolean isValidThemBanDoc(String hoTen, String diaChi, String soDT){
        if(!isEmptyThemBanDoc(hoTen, diaChi, soDT) && isNumberPhone(soDT)){
            return true;
        }
        return false;
    }
    
    public String getMassageErrorThemBanDoc(String hoTen, String diaChi, String SoDT){
        if(isEmptyThemBanDoc(hoTen, diaChi, SoDT)){
            return "Khong duoc bo trong";
        }
        else{
            if(!isNumberPhone(SoDT)){
                return "So DT phai la chu so";
            }
        }
        return "OK";
    }
    
    public boolean isValiBandocByName(ArrayList<QLMuonSach> ql, String name){
        int countBD = 0;
        for(QLMuonSach muonsach : ql){
            if(muonsach.getTenBandoc().equals(name)){
                countBD++;
            }
        }
        if(countBD <= 5) return true;
        return false;
    }
    
    public int countSachMuonByBanDoc(ArrayList<QLMuonSach> ql, String tenBanDoc, String tenSach){
        int count = 0;
        for(QLMuonSach muonsach : ql){
            if(muonsach.getTenBandoc().equals(tenBanDoc) && muonsach.getTenSach().equals(tenSach)){
                count = muonsach.getSoLuong();
            }
        }
        return count;
    }
    
    public String getMassageErrorQLMS(ArrayList<QLMuonSach> ql, String tenBanDoc, String tenSach, String soLuong, String hienTrang){
        if(soLuong.isEmpty() || !isNumberic(soLuong)){
            return "Khong duoc bo trong va so luong la so";
        }
        else{
            if(!isValiBandocByName(ql, tenBanDoc)){
                return "Ban khong duoc muon qua 5 dau sach";
            }
            int num = countSachMuonByBanDoc(ql, tenBanDoc, tenSach);
            if(num + Integer.parseInt(soLuong) > 3){
                return "Ban da muon" + num + "quyen sach.Ban khong duoc muon qua 3 quyen";
            }
        }
        return "OK";
    }
    
    public boolean isValidQLMS(ArrayList<QLMuonSach> ql, String tenBanDoc, String tenSach, String soLuong, String hienTrang){
        if(!soLuong.isEmpty() && isNumberic(soLuong) && isValiBandocByName(ql, tenBanDoc) && countSachMuonByBanDoc(ql, tenBanDoc, tenSach) + Integer.parseInt(soLuong) <= 3){
            return true;
        }
        return false;
    }
}
