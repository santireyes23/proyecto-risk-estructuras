#include

class Territorio{
    private:
    string codigo;
    string continente;
    string colorOcupante;
    int unidades;
    vector<string> vecinos;

    public:
    Territorio (string codigo, string continente, vector<string> vecinos);
    bool asignarOcupante(string color, int cantidadUnidades);
    bool esVecino(string codigoOtroTerritorio);
    bool agregarUnidades(int cantidad);
    bool quitarUnidades(int cantidad);
    };