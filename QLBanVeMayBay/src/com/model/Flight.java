/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.model;

import java.io.Serializable;
import java.sql.Date;
import java.sql.Time;

/**
 *
 * @author Quoc Cuong
 */
public class Flight implements Serializable{
    private int id;
    private String sohieu;
    private Date ngaybay;
    private Time giobay;
    private String noidi;
    private String noiden;
    private Time tgbay;
    private int tongghe;
    private int soghedaban;
    private int soghecontrong;

    public Flight() {
    }

    public Flight(int id, String sohieu, Date ngaybay, Time giobay, String noidi, String noiden, Time tgbay, int tongghe, int soghedaban, int soghecontrong) {
        this.id = id;
        this.sohieu = sohieu;
        this.ngaybay = ngaybay;
        this.giobay = giobay;
        this.noidi = noidi;
        this.noiden = noiden;
        this.tgbay = tgbay;
        this.tongghe = tongghe;
        this.soghedaban = soghedaban;
        this.soghecontrong = soghecontrong;
    }

    public Flight(String sohieu, Date ngaybay, Time giobay, String noidi, String noiden, Time tgbay, int tongghe, int soghedaban, int soghecontrong) {
        this.sohieu = sohieu;
        this.ngaybay = ngaybay;
        this.giobay = giobay;
        this.noidi = noidi;
        this.noiden = noiden;
        this.tgbay = tgbay;
        this.tongghe = tongghe;
        this.soghedaban = soghedaban;
        this.soghecontrong = soghecontrong;
    }
    

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getSohieu() {
        return sohieu;
    }

    public void setSohieu(String sohieu) {
        this.sohieu = sohieu;
    }

    public Date getNgaybay() {
        return ngaybay;
    }

    public void setNgaybay(Date ngaybay) {
        this.ngaybay = ngaybay;
    }

    public Time getGiobay() {
        return giobay;
    }

    public void setGiobay(Time giobay) {
        this.giobay = giobay;
    }

    public String getNoidi() {
        return noidi;
    }

    public void setNoidi(String noidi) {
        this.noidi = noidi;
    }

    public String getNoiden() {
        return noiden;
    }

    public void setNoiden(String noiden) {
        this.noiden = noiden;
    }

    public Time getTgbay() {
        return tgbay;
    }

    public void setThbay(Time tgbay) {
        this.tgbay = tgbay;
    }

    public int getTongghe() {
        return tongghe;
    }

    public void setTongghe(int tongghe) {
        this.tongghe = tongghe;
    }

    public int getSoghedaban() {
        return soghedaban;
    }

    public void setSoghedaban(int soghedaban) {
        this.soghedaban = soghedaban;
    }

    public int getSoghecontrong() {
        return soghecontrong;
    }

    public void setSoghecontrong(int soghecontrong) {
        this.soghecontrong = soghecontrong;
    }
    
    public String toString(){
        return this.id + " " + this.sohieu + " " + this.ngaybay + " " + this.giobay + " " + this.noidi + " " + this.noiden + " " + this.tgbay + " " + this.tongghe + " " + this.soghedaban + " " + this.soghecontrong;
    }
}
