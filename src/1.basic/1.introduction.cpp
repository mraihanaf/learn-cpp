/* 
    Program c++ pertama
        
    -Rai
*/

// menimport iostream
#include <iostream> // ini merupakan header file
/*
    # indikator perintah pre-processor
    include adalah  perintah untuk memasukan library ke source code
    iostream adalah standard library dari c++
    yang funginya adalah untuk input dan output data
*/


/* 
    int main() adalah entry point yang merupakan tempat dimana kode
    akan pertama kali di eksekusi dan dijalankan oleh compiler
    setiap statement pada c++ wajib diakhiri dengan ;
*/

int main(){
    // menampilkan output string di console
    /*
        std:: adalah namespace yang digunakan untuk
        seluruh standard library c++  
    */
    std::cout << "Hello World!" << std::endl;
    // me-return program 0 yang artinya berhasil    
    return 0;
}