class Territorio{
    private:
    string codigo;
    string continente;
    string colorOcupante;
    int unidades;
    vector<string> vecinos;

    public:
    Territorio crearTerritorio();
    bool asignarOcupante();
    bool esVecino();
    bool agregarUnidades();
    bool quitarUnidades();
    }