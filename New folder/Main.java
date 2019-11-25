package Practical;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;
import java.io.*;


public class Main {
    public static void main(String args[]){
        ArrayList<Student> studentList = new ArrayList<>();

        boolean p = true;
        Scanner sc = new Scanner(System.in);
        while (p){
            System.out.println("1. Add student");
            System.out.println("2. Show students");
            System.out.println("3. Save");
            System.out.println("4. Exit");
            int opt = sc.hasNextInt()?sc.nextInt():7;
            switch (opt){
                case 1:studentList.add(Main.addStudent());break;
                case 2:
                    for (Student s:studentList){
                        System.out.println(s.getId()+ ","+s.getName()+ ","+s.getPhone()+","+s.getAddress());
                    }
                    break;
                case 3:
                    File f = new File("C:\\Users\\Admin\\Desktop\\student.txt");
                    String ftxt = "";
                    if(f.canWrite()){
                        try{
                            FileOutputStream fos = new FileOutputStream(f);
                            DataOutputStream dos = new DataOutputStream(fos);
                            for (Student st: studentList){
                                String s= st.getId() +","+ st.getName() +","+ st.getAddress() +","+ st.getPhone()+"\n";
                                ftxt = ftxt + s;
                            }
                            dos.writeBytes(ftxt);
                            dos.close();
                            fos.close();
                        }catch (FileNotFoundException e){
                            System.out.println(e.getMessage());
                        }catch (IOException e){
                            System.out.println(e.getMessage());
                        }
                    }
                    break;
                case 4: p=false;break;
            }
        }
    }

    public static Student addStudent(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap id:");
        String id= sc.nextLine();
        System.out.println("Nhap ten:");
        String name = sc.nextLine();
        System.out.println("Nhap dia chi:");
        String address = sc.nextLine();
        System.out.println("Nhap so dien thoai");
        String phone = sc.nextLine();
        return new Student(id,name,address,phone);
    }




}



