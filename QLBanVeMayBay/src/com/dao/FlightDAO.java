/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.dao;

import com.model.Flight;
import java.sql.Connection;
import java.sql.Date;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Quoc Cuong
 */
public class FlightDAO {
    Connection con = null;
    public ArrayList<Flight> selectFlight(Date date){
        con = DBConnection.getConnection();
        ArrayList<Flight> listFlight = new ArrayList<>();
        try {
            Statement st = con.createStatement();
            String s = "2020-11-01";
            ResultSet rs = st.executeQuery("select * from tbl_flight where ngaybay = '" + date + "'");
            while(rs.next()){
                Flight flight = new Flight(rs.getInt(1), rs.getString(2), rs.getDate(3), rs.getTime(4), rs.getString(5), rs.getString(6), rs.getTime(7), rs.getInt(8), rs.getInt(9), rs.getInt(10));
                listFlight.add(flight);
            }
        } catch (SQLException ex) {
            Logger.getLogger(FlightDAO.class.getName()).log(Level.SEVERE, null, ex);
        }
        return listFlight;
    }
    
    public boolean insertFlight(Flight flight){
        con = DBConnection.getConnection();
        boolean result = false;
        try {
            Statement st = con.createStatement();
            String sql = "insert into tbl_flight(sohieu, ngaybay, giobay, noidi, noiden, tgbay, tongghe, soghedaban, soghecontrong) "
                    + "values('" + flight.getSohieu() + "', '" + flight.getNgaybay() + "', '" + flight.getGiobay() + "', '" + flight.getNoidi() + "', '" + flight.getNoiden() + "', '" + flight.getTgbay() + "', " + flight.getTongghe() + ", " + flight.getSoghedaban() + ", " + flight.getSoghecontrong() + ");";
            st.executeUpdate(sql);
            result = true;
        } catch (SQLException ex) {
            Logger.getLogger(FlightDAO.class.getName()).log(Level.SEVERE, null, ex);
        }
        return result;
    }
}
