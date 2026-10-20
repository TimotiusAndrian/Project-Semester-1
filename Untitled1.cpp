#include <iostream>

using namespace std;

int main(){
    int uangdimiliki, makan, paketan, lainnya, total, totalkeluar, sisauang, transportasi
    ;

    cout << "Uang Dimiliki:";
    cin >> uangdimiliki;
    cout << "Makan        :";
    cin >> makan;
    cout << "Transportasi :";
    cin >> transportasi;
    cout << "Pulsa        :";
    cin >> paketan;
    cout << "Lainnya      :";
    cin >> lainnya;

    totalkeluar = makan + transportasi + paketan + lainnya;
    sisauang = uangdimiliki - totalkeluar;

    cout << "=== PENGELUARAN HARIAN ===\n";
    cout << "" << endl;
    cout << "Makan         : Rp" << makan << endl;
    cout << "Transportasi  : Rp" << transportasi << endl;
    cout << "Pulsa         : Rp" << paketan << endl;
    cout << "Lainnya       : Rp" << lainnya << endl;
    cout << "" << endl;
    cout << "total         : Rp" << totalkeluar << endl;

    cout << "Uang Dimiliki : Rp" << uangdimiliki << endl;
    cout << "Total Keluar  : Rp" << total << endl;
    cout << "Sisa Uang     : Rp" << sisauang;


}
