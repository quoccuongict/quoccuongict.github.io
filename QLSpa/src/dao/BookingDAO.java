/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Quoc Cuong
 */
public class BookingDAO extends DAO{
    Statement st = null;
    public BookingDAO() throws SQLException{
        super();
        st = con.createStatement();
    }
    
    public float calculatorBooking(int idClient) throws SQLException{
        float amount = 0;
        BookedServiceDAO bookedService = new BookedServiceDAO();
        String sql = "SELECT id FROM tbl_booking where idclient = " + idClient;
        ResultSet rs = st.executeQuery(sql);
        while(rs.next()){
            int bookingID = rs.getInt("id");
            amount += bookedService.calculatorService(bookingID);
        }
        return amount;
    }
    
    public int getIdBooking(int idClient){
        int idBooking = 0;
        String sql = "SELECT id FROM qlspa.tbl_booking where idclient = " + idClient;
        try {
            ResultSet rs = st.executeQuery(sql);
            while(rs.next()){
                idBooking = rs.getInt("id");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return idBooking;
    }
}
