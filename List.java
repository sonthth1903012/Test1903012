package Test;

import java.util.ArrayList;
import java.util.Scanner;

public class List {
    public static ArrayList<Hotel> hotelList= new ArrayList<Hotel>();
    public static void main(String[] args) {
        Hotel Melina = new Hotel("Melina", "Hanoi", "Long Pham");
        Hotel Lelouch = new Hotel("Lelouch", "Hanoi", "CC");
        Hotel VinMart = new Hotel("Vinmart", "Hanoi", "Pham Nhat Vuong");
        Hotel Bleach = new Hotel("Bleach", "Hanoi", "Shinigami");
        Hotel Naruto = new Hotel("Naruto", "Hanoi", "Hinata");
        Hotel OnePiece = new Hotel("Gintama", "Hanoi", "Oda");
        Hotel Oracle = new Hotel("Oracle", "Hanoi", "Dota");
        Hotel SunGroup = new Hotel("SunGroup", "Hanoi", "Sunny");
        Hotel Saitama = new Hotel("Saitama", "Hanoi", "Nippon");
        Hotel Souma = new Hotel("Souma", "Hanoi", "Shoukugeki");

        hotelList.add(Melina);
        hotelList.add(Lelouch);
        hotelList.add(VinMart);
        hotelList.add(Bleach);
        hotelList.add(Naruto);
        hotelList.add(Oracle);
        hotelList.add(OnePiece);
        hotelList.add(SunGroup);
        hotelList.add(Saitama);
        hotelList.add(Souma);

        Search();

    }
    public static void Search() {
        String y;
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter owner name to find the hotel: ");
        y = sc.nextLine();
        for (Hotel ht : hotelList){
            if (ht.ownerName.equals(y)){
                System.out.println("Name: "+ht.name+" "+"Location: "+ht.location);
            }
        }
    }
}
