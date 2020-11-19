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
import model.Service;

/**
 *
 * @author Quoc Cuong
 */
public class ServiceDAO extends DAO{
    Statement st = null;
    public ServiceDAO() throws SQLException{
        super();
        st = con.createStatement();
    }
    
    public ArrayList<Service> getService(int idClient){
        ArrayList<Service> list = new ArrayList<Service>();
        String sql = "SELECT c.id, c.`name`, c.price FROM qlspa.tbl_booking a, qlspa.tbl_bookedservice b, qlspa.tbl_service c where b.idbooking = a.id and b.idservice = c.id and a.idclient = " + idClient;
        try {
            ResultSet rs = st.executeQuery(sql);
            while(rs.next()){
                Service service = new Service();
                service.setId(rs.getInt("id"));
                service.setName(rs.getString("name"));
                service.setPrice(rs.getFloat("price"));
                list.add(service);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return list;
    }
}
