// NAMA		: MUHAMMAD RUSYDI AL HAKIM
// NRP		: 5023221002
// Jurusan	: TEKNIK BIOMEDIK

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

using namespace std;

float mencari_V0(float variabel1, float variabel2)
{
	/* Tulis fungsi mencari v0 kalian disini */
    return variabel1 / cos(SUDUT);
}

float speed_dgn_loss(float variabel)
{
	/* tulis fungsi hitung_loss kalian disini */
    if (variabel >= 1 && variabel <= 10) {
        return variabel + 1;
    }
    else if (variabel >= 11 && variabel <= 20) {
        return variabel + 3;
    }
    else if (variabel >= 21 && variabel <= 25) {
        return variabel + 5;
    }
    else {
        return variabel - 5;
    }
}

int main() {
    float v, v0x, v0y, x, v0;

    cin >> v;
    v = speed_dgn_loss(v);

    x = pow(v, 2) / GRAVITASI;

    v0x = sqrt(pow(v, 2) * cos(SUDUT));
    v0y = sqrt(pow(v, 2) * sin(SUDUT));

    v0 = mencari_V0(v0x, v0y);
  
  	/* input adalah kecepatan tangensial maksimum roller */
  	/* std::cin >> input */
  
  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
    cout << int(x) << " " << v0;
    return 0;
}
