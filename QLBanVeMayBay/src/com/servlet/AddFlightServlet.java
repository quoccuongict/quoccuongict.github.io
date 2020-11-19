
package com.servlet;

import com.model.Flight;
import java.io.IOException;
import java.io.PrintWriter;
import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.sql.Date;
import java.sql.Time;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author Quoc Cuong
 */
public class AddFlightServlet extends HttpServlet {

    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        request.setCharacterEncoding("UTF-8");
        PrintWriter out = response.getWriter();
        String sohieu = request.getParameter("sohieu");
        Date ngaybay = Date.valueOf(request.getParameter("ngaybay"));
        Time giobay = Time.valueOf(request.getParameter("giobay"));
        String noidi = request.getParameter("noidi");
        String noiden = request.getParameter("noiden");
        Time tgbay = Time.valueOf(request.getParameter("tgbay"));
        int tongghe = Integer.parseInt(request.getParameter("tongghe"));
        int soghedaban = 0;
        int soghecontrong = tongghe;
        Flight flight = new Flight(sohieu, ngaybay, giobay, noidi, noiden, tgbay, tongghe, soghedaban, soghecontrong);
        try {
            RMILoginInterface instance = (RMILoginInterface) Naming.lookup("rmi://localhost:6899/LOGIN1");
            boolean ans = instance.addFlight(flight);
            if(ans){
                out.println("OK");
            }
            else{
                out.println("NOT OK");
            }
        } catch (NotBoundException ex) {
            ex.printStackTrace();
        } catch (MalformedURLException ex) {
            ex.printStackTrace();
        } catch (RemoteException ex) {
            ex.printStackTrace();
        }
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /**
     * Handles the HTTP <code>GET</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Handles the HTTP <code>POST</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
