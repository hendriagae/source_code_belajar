#include <iostream>

using namespace std;

int main()
{
    //problem : Berapa jumlah lagu yang tersimpan dalam kepingan HD DVD berkapasitas 30 GB 
    //jika rata-rata file lagu berformat Mp3, satu lagunya berkisar 3 MB ?
    
//     Penyelesaian
// Diketahui :   1 GB = 1,024 MB     
//                   1 Lagu Mp3 = 3 MB
// Maka       :  30 GB --> 30 * 1,024 MB = 30,720 MB
//                  30,720 MB / 3 MB = 10,240 Mp3
    
    //dketahui 
    double giga = 1.024;
    double lagu = 3;
    
    //maka
    cout << 30 * giga / 3;
    
    
    
    
    
    return 0;
}
