/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

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
public class BookedServiceDAO extends DAO{
//    BookedServiceDAO bookedService = new BookedServiceDAO();
    BookedServiceMaterialDAO bookedServiceMaterial = new BookedServiceMaterialDAO();
    Statement st = null;
    public BookedServiceDAO() throws SQLException{
        super();
        st = con.createStatement();
        
    }
    
    public float calculatorService(int idBooking){
        float amount = 0;
            String sql = "SELECT a.id, a.quantity, b.price FROM tbl_bookedservice a , tbl_service b where a.idservice = b.id and a.idbooking = " + idBooking;
            ResultSet rs;
        try {
            rs = st.executeQuery(sql);
            while(rs.next()){
                amount += rs.getInt("quantity") * rs.getFloat("price");
                amount += bookedServiceMaterial.calculatorMaterial(rs.getInt("id"));
            }
        } catch (Exception e) {
            e.printStackTrace();
        } 
        return amount;
    }
    
    public ArrayList<String> getQuantityService(int idClient){
        ArrayList<String> quantity = new ArrayList<String>();
        String sql = "SELECT b.quantity FROM qlspa.tbl_booking a, qlspa.tbl_bookedservice b where b.idbooking = a.id and a.idclient = " + idClient;
        ResultSet rs;
        try {
            rs = st.executeQuery(sql);
            while(rs.next()){
                String tmp = rs.getInt("quantity") + "";
                quantity.add(tmp);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        
        return quantity;
    }
}
