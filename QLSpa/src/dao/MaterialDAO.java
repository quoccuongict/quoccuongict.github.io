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
public class MaterialDAO extends DAO{
    Statement st = null;
    public MaterialDAO() throws SQLException{
        super();
        st = con.createStatement();
    }
    
    public ArrayList<Material> getMaterial(int idClient){
        ArrayList<Material> list = new ArrayList<Material>();
        String sql = "SELECT d.id, d.`name`, d.price, d.`type` FROM qlspa.tbl_booking a, qlspa.tbl_bookedservice b, qlspa.tbl_bookedservicematerial c, qlspa.tbl_material d where b.idbooking = a.id and c.idbookedservice = b.id and c.idmaterial = d.id and a.idclient = " + idClient;
        try {
            ResultSet rs = st.executeQuery(sql);
            while(rs.next()){
                Material material = new Material();
                material.setId(rs.getInt("id"));
                material.setName(rs.getString("name"));
                material.setPrice(rs.getFloat("price"));
                material.setType(rs.getString("type"));
                list.add(material);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return list;
    }
}
