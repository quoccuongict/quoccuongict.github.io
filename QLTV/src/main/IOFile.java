/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;


/**
 *
 * @author Quoc Cuong
 */
public class IOFile {
    public void ghiObjectToFile(Object object, String name){
        try {
            FileOutputStream f = new FileOutputStream(name,true);
            ObjectOutputStream oos = new ObjectOutputStream(f){
                @Override
                protected void writeStreamHeader() throws IOException{
                    reset();
                }
            };
            oos.writeObject(object);
            oos.close();
        } catch (FileNotFoundException ex) {
            Logger.getLogger(IOFile.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(IOFile.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public ArrayList docFileByObject(String name){
        List list = new ArrayList();
        try {
            FileInputStream f = new FileInputStream(name);
            ObjectInputStream ois = new ObjectInputStream(f){
                @Override
                protected void readStreamHeader() throws IOException{
//                    reset();
                }
            };
            while(ois.read() == -1){
                Object object = (Object) ois.readObject();
                list.add(object);
            }
        } catch (FileNotFoundException ex) {
            Logger.getLogger(IOFile.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
//            Logger.getLogger(IOFile.class.getName()).log(Level.SEVERE, null, ex);
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(IOFile.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        return (ArrayList) list;
    }
}
