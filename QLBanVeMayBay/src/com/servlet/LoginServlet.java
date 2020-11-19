
package com.servlet;

import com.model.User;
import java.io.IOException;
import java.io.PrintWriter;
import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author Quoc Cuong
 */
public class LoginServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
//        processRequest(request, response);
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        String username = request.getParameter("username");
        String password = request.getParameter("password");
        try {
            RMILoginInterface instance = (RMILoginInterface) Naming.lookup("rmi://localhost:6899/LOGIN1");
            User user = instance.checkLogin(username, password);
            if(user != null){
                if(user.getPosition().equals("admin")){
                    response.sendRedirect("pageadmin.jsp");
                }
                else{
                    if(user.getPosition().equals("sale")){
                        response.sendRedirect("welcome.jsp");
                    }
                }
            }
            else{
                out.println("Incorrect Password!!!");
                RequestDispatcher dispatcher = request.getRequestDispatcher("index.html");
                dispatcher.include(request, response);
            }
        } catch (NotBoundException ex) {
            ex.printStackTrace();
        } catch (MalformedURLException ex) {
            ex.printStackTrace();
        } catch (RemoteException ex) {
            ex.printStackTrace();
        }
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
