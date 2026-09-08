#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    cout<<"Bienvenido al sistema de apoyo para risk"<<endl;

    string comando;

    while (true) {
        cout << "$ ";           // este es el indicador de línea
        getline(cin, comando);

        stringstream ss(comando);
        string parte;
        vector<string> partes;
        while (ss >> parte) {
            partes.push_back(parte);
        }

        // Si el usuario no escribio nada, vuelve a pedir
        if (partes.empty()) {
            continue;
        }

        // 2. Ahora si, decidir qué comando es
        string comando = partes[0];
    
        if (comando == "salir") {
        break;

        }else if (comando == "inicializar") {
            if (partes.size() != 2) {
                cout << "Uso: inicializar archivo_inicio.txt" << endl;
                cout << "Para saber mas sobre el comando inicializar, escriba ayuda inicializar" << endl;
            } else {
                string archivo = partes[1];
                cout <<"Comando validado correctamente"<< endl;
            }

        }else if(comando == "obtener_unidades"){
            if (partes.size() != 2) {
                cout << "Uso: obtener_unidades nombre_jugador" << endl;
                cout << "Para saber mas sobre el comando obtener_unidades, escriba ayuda obtener_unidades" << endl;
            } else {
                string jugador = partes[1];
                cout<<"Comando validado correctamente"<< endl;
            }
        
        }else if(comando == "atacar"){
            if (partes.size() != 2){
                cout << "Uso: atacar nombre_jugador" << endl;
                cout << "Para saber mas sobre el comando atacar, escriba ayuda atacar" << endl;
            } else {
                string jugador = partes[1];
                cout<<"Comando validado correctamente"<< endl;
            }

        }else if(comando == "fortificar"){
            if (partes.size() != 2){
                cout << "Uso: fortificar nombre_jugador" << endl;
                cout << "Para saber mas sobre el comando fortificar, escriba ayuda fortificar" << endl;
            } else {
                string jugador = partes[1];
                cout<<"Comando validado correctamente"<< endl;
            }
    
        }else if(comando == "estado_juego"){
            if (partes.size() != 1){
                cout << "Uso: estado_juego" << endl;
                cout << "Para saber mas sobre el comando estado_juego, escriba ayuda estado_juego" << endl;
            } else {
                cout<<"Comando validado correctamente"<< endl;
            }

        }else if(comando == "guardar"){
            if (partes.size() != 2){
                cout << "Uso: guardar nombre_archivo" << endl;
                cout << "Para saber mas sobre el comando guardar, escriba ayuda guardar" << endl;
            } else {
                string archivo = partes[1];
                cout<<"Comando validado correctamente"<< endl;
            }

        }else if(comando == "guardar_comprimido"){
            if (partes.size() != 2){
                cout << "Uso: guardar_comprimido nombre_archivo" << endl;
                cout << "Para saber mas sobre el comando guardar_comprimido, escriba ayuda guardar_comprimido" << endl;
            } else {
                string archivo = partes[1];
                cout<<"Comando validado correctamente"<< endl;
            }

        }else if(comando == "costo_conquista"){
            if (partes.size() != 3){
                cout << "Uso: costo_conquista nombre_jugador nombre_territorio" << endl;
                cout << "Para saber mas sobre el comando costo_conquista, escriba ayuda costo_conquista" << endl;
            } else {
                string jugador = partes[1];
                string territorio = partes[2];
                cout<<"Comando validado correctamente"<< endl;
            }

        }else if(comando == "conquista_mas_barata"){
            if (partes.size() != 2){
                cout << "Uso: conquista_mas_barata nombre_jugador" << endl;
                cout << "Para saber mas sobre el comando conquista_mas_barata, escriba ayuda conquista_mas_barata" << endl;
            } else {
                string jugador = partes[1];
                cout<<"Comando validado correctamente"<< endl;
            }

        }else if(comando == "ayuda"){
             if (partes.size() == 1) {
            cout << "Comandos disponibles:" << endl;
            cout << "inicializar" << endl;
            cout << "obtener_unidades" << endl;
            cout << "atacar" << endl;
            cout << "fortificar" << endl;
            cout << "estado_juego" << endl;
            cout << "guardar" << endl;
            cout << "guardar_comprimido" << endl;
            cout << "costo_conquista" << endl;
            cout << "conquista_mas_barata" << endl;
            cout << "salir" << endl;
             } else if(partes.size() == 2) {
                string comando_ayuda = partes[1];
                if (comando_ayuda == "inicializar") {
                    cout << "comando: inicializar archivo_inicio.txt" << endl;
                    cout << " posibles salidas en pantalla:" << endl;
                    cout << "(Archivo vacio) archivo_inicio no contiene informacion." << endl;
                    cout << "(Archivo erroneo) archivo_inicio no se encuentra o no puede leerse." << endl;
                    cout << "(Archivo sin formato) archivo_inicio no contiene informacion en el formato esperado." << endl;
                    cout << "(Juego en curso) El juego ya ha sido inicializado." << endl;
                    cout << "(Comando correcto) El juego se ha inicializado correctamente." << endl;
                    cout << "descripcion: Inicializa el juego a partir de la informacion contenida en el archivo archivo_inicio.txt .," << endl;
                    cout << "dejando la interfaz del juego lista para recibir los turnos de cada jugador. La estructura del archivo de inicializacion debe ser la siguiente:" << endl;
                    cout << "         N" << endl;
                    cout << "        nombre_jugador_1 color_jugador_1" << endl;
                    cout << "        ..." << endl;
                    cout << "        nombre_jugador_N color_jugador_N" << endl;
                    cout << "            codigo_territorio_1 color_jugador_ocupa num_unidades_ocupan" << endl;
                    cout << "            ..." << endl;
                    cout << "            codigo_territorio_42 color_jugador_ocupa num_unidades_ocupan" << endl;
                    cout << "            donde N es un número entero que indica la cantidad de jugadores que tomaran parte del juego, nombre_jugador_i" << endl;
                    cout << "            corresponde a una palabra (cadena de maximo 8 caracteres sin espacios) con el nombre de cada jugador, y" << endl;
                    cout << "            color_jugador_i corresponde al nombre del color que distinguira al jugador a lo largo de la partida. A con-" << endl;
                    cout << "            tinuacion de esa informacion, para cada territorio en el tablero de Risk, se identifica: codigo_territorio_i," << endl;
                    cout << "            que corresponde al codigo del territorio establecido en la tabla1, color_jugador_ocupa, que corresponde" << endl;
                    cout << "            al nombre del color del jugador respectivo que esta ocupando ese territorio, y num_unidades_ocupan, que" << endl;
                    cout << "            identifica el número de unidades de infanteria que el jugador ha ubicado en ese territorio. Al momento de" << endl;
                    cout << "            la lectura de la informacion, es importante validar que los colores utilizados en los territorios corresponden" << endl;
                    cout << "            a los colores definidos inicialmente para los jugadores, que la suma de unidades de infanteria por jugador" << endl;
                    cout << "            corresponde a la cantidad establecida para el inicio del juego de acuerdo a la cantidad de jugadores, y que" << endl;
                    cout << "            todos los territorios del tablero tienen asignadas unidades de infanteria." << endl;
                } else if (comando_ayuda == "obtener_unidades") {
                    cout << "comando: obtener_unidades nombre_jugador" << endl;
                    cout << "            posibles salidas en pantalla:" << endl;
                    cout << "            (Juego no inicializado) Esta partida no ha sido inicializada correctamente." << endl;
                    cout << "            (Juego terminado) Esta partida ya tuvo un ganador." << endl;
                    cout << "            (Jugador no válido) El jugador nombre_jugador no forma parte de esta partida." << endl;
                    cout << "            (Jugador fuera de turno) No es el turno del jugador nombre_jugador ." << endl;
                    cout << "            (Comando correcto) El jugador nombre_jugador ha terminado de reclamar y ubicar sus unidades."
                            << endl;
                    cout << "            descripción: Realiza las operaciones descritas dentro del turno del jugador nombre_jugador correspondientes a la obtención de nuevas unidades.";
                    cout << "            De esta forma, el comando debería primero informar al jugador";
                    cout << "        cuántas unidades adicionales puede reclamar, para luego preguntarle en cuáles de sus territorios las quiere";
                    cout << "        asignar y en qué cantidad. En este comando es clave utilizar una interfaz adecuada que sea fácil de seguir";
                    cout << "        para los jugadores en pantalla." << endl;
                } else if (comando_ayuda == "atacar") {
                    cout << "comando: atacar nombre_jugador" << endl;
                    cout << "            posibles salidas en pantalla:" << endl;
                    cout << "            (Juego no inicializado) Esta partida no ha sido inicializada correctamente." << endl;
                    cout << "            (Juego terminado) Esta partida ya tuvo un ganador." << endl;
                    cout << "            (Jugador no válido) El jugador nombre_jugador no forma parte de esta partida." << endl;
                    cout << "            (Jugador fuera de turno) No es el turno del jugador nombre_jugador ." << endl;
                    cout << "            (Jugador no ha ubicado unidades) El jugador nombre_jugador no ha ejecutado el comando" << endl;
                    cout << "            obtener_unidades." << endl;
                    cout << "            (Comando correcto) El jugador nombre_jugador ha terminado de atacar." << endl;
                    cout << "descripcion: Realiza las operaciones descritas dentro del turno del jugador nombre_jugador correspondientes" << endl;
                    cout << "al ataque. De esta forma, el comando debería primero preguntar la configuracion del ataque, es decir," << endl;
                    cout << "desde cual territorio quiere atacar (que contiene actualmente unidades del jugador) y hacia cual territorio" << endl;
                    cout << "dirigira el ataque, verificando las condiciones ya descritas. Luego deberia informar los valores obtenidos con" << endl;
                    cout << "los dados, y la cantidad de unidades que se ganan o pierden. Este proceso se repite hasta que alguno de" << endl;
                    cout << "los dos territorios se quede sin unidades, o hasta que el atacante decida detenerse." << endl;

                } else if (comando_ayuda == "fortificar") {
                    cout << "comando: fortificar nombre_jugador" << endl;
                    cout << "            posibles salidas en pantalla:" << endl;
                    cout << "            (Juego no inicializado) Esta partida no ha sido inicializada correctamente." << endl;
                    cout << "            (Juego terminado) Esta partida ya tuvo un ganador." << endl;
                    cout << "            (Jugador no válido) El jugador nombre_jugador no forma parte de esta partida." << endl;
                    cout << "            (Jugador fuera de turno) No es el turno del jugador nombre_jugador ." << endl;
                    cout << "            (Jugador no ha atacado) El jugador nombre_jugador no ha ejecutado el comando atacar." << endl;
                    cout << "            (Comando correcto) El jugador nombre_jugador ha terminado de fortificar su posicion." << endl;
                    cout << "descripcion: Realiza las operaciones descritas dentro del turno del jugador nombre_jugador correspondientes" << endl;
                    cout << "a la fortificacion. De esta forma, el comando deberia preguntar al jugador los territorios vecinos que" << endl;
                    cout << "desea seleccionar para la fortificacion, asi como la cantidad de unidades que se trasladaran de uno al otro." << endl;

                } else if (comando_ayuda == "estado_juego") {
                    cout << "comando: estado_juego" << endl;
                    cout << "            posibles salidas en pantalla:" << endl;
                    cout << "            (Juego no inicializado) Esta partida no ha sido inicializada correctamente." << endl;
                    cout << "            (Juego terminado) Esta partida ya tuvo un ganador." << endl;
                    cout << "descripcion: Presenta en pantalla un resumen de la situacion actual del juego, en la que se debe indicar:" << endl;
                    cout << "numero de jugadores, nombres y colores de cada uno, jugador con el turno actual, y lista de los territorios" << endl;
                    cout << "con el color del jugador que lo controla y la cantidad de unidades que hay ubicadas en cada uno." << endl;

                } else if (comando_ayuda == "guardar") {
                    cout << "comando: guardar nombre_archivo" << endl;
                    cout << "            salida en pantalla:" << endl;
                    cout << "            (Juego no inicializado) Esta partida no ha sido inicializada correctamente." << endl;
                    cout << "            (Comando correcto) La partida ha sido guardada correctamente." << endl;
                    cout << "            (Error al guardar) La partida no ha sido guardada correctamente." << endl;
                    cout << "descripcion: El estado actual del juego es guardado en un archivo de texto, con el mismo formato del" << endl;
                    cout << "archivo usado para la inicializacion del juego. Note que este comando guarda un archivo de texto plano," << endl;
                    cout << "sin codificacion." << endl;

                } else if (comando_ayuda == "guardar_comprimido") {
                    cout << "comando: guardar_comprimido nombre_archivo" << endl;
                    cout << "            salida en pantalla:" << endl;
                    cout << "            (Juego no inicializado) Esta partida no ha sido inicializada correctamente." << endl;
                    cout << "            (Comando correcto) La partida ha sido codificada y guardada correctamente." << endl;
                    cout << "            (Error al codificar y/o guardar) La partida no ha sido codificada ni guardada correctamente." << endl;
                    cout << "descripcion: El estado actual del juego es guardado en un archivo binario (con extension .bin) con la" << endl;
                    cout << "informacion (la misma que se almacenaria en un archivo de texto normal, ver comando guardar) comprimida," << endl;
                    cout << "utilizando la codificacion de Huffman en el formato descrito en el enunciado." << endl;

                } else if (comando_ayuda == "costo_conquista") {
                    cout << "comando: costo_conquista nombre_jugador territorio" << endl;
                    cout << "            salida en pantalla:" << endl;
                    cout << "            (Juego no inicializado) Esta partida no ha sido inicializada correctamente." << endl;
                    cout << "            (Juego terminado) Esta partida ya tuvo un ganador." << endl;
                    cout << "            (Comando correcto) Para conquistar el territorio territorio, nombre_jugador debe atacar" << endl;
                    cout << "            desde territorio_1, pasando por los territorios territorio_2, territorio_3, ..., territorio_m." << endl;
                    cout << "            Debe conquistar n unidades de ejercito." << endl;
                    cout << "descripcion: El programa debe calcular el costo y la secuencia de territorios a ser conquistados para" << endl;
                    cout << "lograr controlar el territorio dado por el usuario. El territorio desde donde debe atacar debe ser aquel" << endl;
                    cout << "que el jugador tenga controlado mas cerca al dado por el jugador. Esta informacion se analiza desde el" << endl;
                    cout << "punto de vista del jugador nombre_jugador." << endl;

                } else if (comando_ayuda == "conquista_mas_barata") {
                    cout << "comando: conquista_mas_barata nombre_jugador" << endl;
                    cout << "            salida en pantalla:" << endl;
                    cout << "            (Juego no inicializado) Esta partida no ha sido inicializada correctamente." << endl;
                    cout << "            (Juego terminado) Esta partida ya tuvo un ganador." << endl;
                    cout << "            (Comando correcto) La conquista mas barata es avanzar sobre el territorio territorio_1" << endl;
                    cout << "            desde el territorio territorio_2. Para conquistar el territorio territorio_1, debe atacar" << endl;
                    cout << "            desde territorio_2, pasando por los territorios territorio_3, territorio_4, ..., territorio_m." << endl;
                    cout << "            Debe conquistar n unidades de ejercito." << endl;
                    cout << "descripcion: De todos los territorios posibles, calcular aquel que pueda implicar un menor numero de" << endl;
                    cout << "unidades de ejercito perdidas. Esta informacion se analiza desde el punto de vista del jugador" << endl;
                    cout << "nombre_jugador." << endl;

                } else if (comando_ayuda == "salir") {
                    cout << "comando: salir" << endl;
                    cout << "            (No tiene salida por pantalla)" << endl;
                    cout << "descripcion: Termina la ejecucion de la aplicacion." << endl;

                } else {
                    cout << "Comando no reconocido para ayuda: "<< comando_ayuda << endl;
                }

             }

        }
        else {
            cout << "Comando no reconocido: "<< comando << endl;
        }   
    }
    return 0;
} 