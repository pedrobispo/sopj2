//
// Created by pedro on 07/12/2018.
//

#ifndef PJ2_OBSERVADOR_H
#define PJ2_OBSERVADOR_H

#include <vector>

/* A ideia é criar uma matriz 3x2 na qual
/       X   Y
ROB1  |        |
ROB2  |        |
ROB3  |        |

Cada linha fornecerá quem é o robo com seu par de coordenadas nas colunas X e Y
Com 0<X<300 e 0<Y<400

3 matrizes vão ser geradas sendo elas uma para cada fonte (Observadores)e então enviadas para o buffer

 O buffer irá aguardar até que todas as matrizes tenham chegado e então envia-las para o processamento

 E então o valor médio das matrizes será calculado e enviado aos robos

 */
class observador {
private:
    std::vector<std::vector<int> >obs1;
    std::vector<std::vector<int> >obs2;
    std::vector<std::vector<int> >obs3;
public:



};


#endif //PJ2_OBSERVADOR_H
