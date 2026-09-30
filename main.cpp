#include <iostream>
#include <iomanip>
#include <format>

using namespace std;

int main() {
    // Login
    int n_acnt = 0;
    cout << "Quel est votre numéro de compte ?" << endl;
    cin >> n_acnt;

    string name;
    cout << "Quel est votre nom de famille ?" << endl;
    cin >> name;

    // Displayed info
    float sold_acnt = 1000.00;
    float t_chf = 1;
    double t_euro = 1.024;
    float op_fee = 5.00;

    cout << "Solde de votre compte CHF : " << sold_acnt << endl;
    cout <<
        "Taux de change : " << t_chf << " CHF = " << t_euro << " Euro"
    << endl;
    cout << "Frais d'opération : " << op_fee << " CHF" << endl;

    // Get change
    float sold_euro;
    cout << "Entrez la somme souhaitée en Euro :" << endl;
    cin >> sold_euro;

    double sold_chf = (sold_euro * t_chf) / t_euro;
    double f_sold_acnt = sold_acnt - (sold_chf + op_fee);

    cout <<
        "Somme CHF : " << sold_chf << ", Solde compte : " << f_sold_acnt
    << endl;

    // Ticket
    int widthL = 20;

    cout << format(
    "+{:-<{}}+ \n"
        "| \n"
        "| {} \n"
        "| {} \n"
        "| \n"
        "| {:<{}} : {:.2f} \n"
        "| {}{:<{}} : {} \n"
        "| \n"
        "| {:<{}} : {:.2f} \n"
        "| {:<{}} : {:.2f} \n"
        "| \n"
        "| {:<{}} : {:.2f} \n"
        "+{:-<{}}+ \n",
        "", 30,
        name, n_acnt, "Somme Euro", widthL, sold_euro, t_chf, " CHF en Euro", widthL, t_euro,
        "Somme CHF", widthL, sold_chf, "Frais", widthL, op_fee, "Solde Compte", widthL, f_sold_acnt,
        "", 30
            ) << endl;

}
