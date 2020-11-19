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
import model.Material;

/**
 *
 * @author Quoc Cuong
 */
public class BookedServiceMaterialDAO extends DAO{
//    BookedServiceMaterialDAO bookedServiceMaterial = new BookedServiceMaterialDAO();
    Statement st = null;
    public BookedServiceMaterialDAO() throws SQLException{
        
        super();
        st = con.createStatement();
    }
    
    public float calculatorMaterial(int idBookedService){
        float amount = 0;
        String sql = "SELECT a.quantity, b.price FROM tbl_bookedservicematerial a, tbl_material b where a.idmaterial = b.id and idbookedservice = " + idBookedService;
        ResultSet rs;
        try {
            rs = st.executeQuery(sql);
            while(rs.next()){
                amount += rs.getInt("quantity") * rs.getFloat("price");
            }
        } catch (SQLException ex) {
            Logger.getLogger(BookedServiceMaterialDAO.class.getName()).log(Level.SEVERE, null, ex);
        }
        return amount;
    }
    
    public ArrayList<String> getQuantityMaterial(int idClient){
        ArrayList<String> quantity = new ArrayList<String>();
        String sql = "SELECT c.quantity FROM qlspa.tbl_booking a, qlspa.tbl_bookedservice b, qlspa.tbl_bookedservicematerial c where b.idbooking = a.id and c.idbookedservice = b.id and a.idclient = " + idClient;
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
