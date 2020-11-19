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
public class QLMuonSach implements Serializable{
    private String tenBandoc;
    private String tenSach;
    private int soLuong;
    private String hienTrang;

    public QLMuonSach(String tenBandoc, String tenSach, int soLuong, String hienTrang) {
        this.tenBandoc = tenBandoc;
        this.tenSach = tenSach;
        this.soLuong = soLuong;
        this.hienTrang = hienTrang;
    }

    public String getTenBandoc() {
        return tenBandoc;
    }

    public void setTenBandoc(String tenBandoc) {
        this.tenBandoc = tenBandoc;
    }

    public String getTenSach() {
        return tenSach;
    }

    public void setTenSach(String tenSach) {
        this.tenSach = tenSach;
    }

    public int getSoLuong() {
        return soLuong;
    }

    public void setSoLuong(int soLuong) {
        this.soLuong = soLuong;
    }

    public String getHienTrang() {
        return hienTrang;
    }

    public void setHienTrang(String hienTrang) {
        this.hienTrang = hienTrang;
    }
    
    @Override
    public String toString(){
        return this.tenBandoc + " " + this.tenSach + " " + this.soLuong + " " + this.hienTrang;
    }
}
