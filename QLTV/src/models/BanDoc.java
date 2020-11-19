/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package models;

import java.io.Serializable;

/**
 *
 * @author Quoc Cuong
 */
public class BanDoc implements Serializable{
    private int maBandoc;
    private String hoTen;
    private String diaChi;
    private String soDT;

    public BanDoc(int maBandoc, String hoTen, String diaChi, String soDT) {
        this.maBandoc = maBandoc;
        this.hoTen = hoTen;
        this.diaChi = diaChi;
        this.soDT = soDT;
    }

    public int getMaBandoc() {
        return maBandoc;
    }

    public void setMaBandoc(int maBandoc) {
        this.maBandoc = maBandoc;
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public String getDiaChi() {
        return diaChi;
    }

    public void setDiaChi(String diaChi) {
        this.diaChi = diaChi;
    }

    public String getSoDT() {
        return soDT;
    }

    public void setSoDT(String soDT) {
        this.soDT = soDT;
    }
    @Override
    public String toString(){
        return this.maBandoc + " " + this.hoTen + " " + this.diaChi + " " + this.soDT;
    }
}
