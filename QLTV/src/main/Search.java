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
public class Search {
    public int searchBanDocInQLMS(ArrayList<QLMuonSach> ql, String tenBanDoc, String tenSach){
        for(int i = 0; i < ql.size(); i++){
            if(ql.get(i).getTenBandoc().equals(tenBanDoc) && ql.get(i).getTenSach().equals(tenSach)){
                return i;
            }
        }
        return -1;
    }
}
