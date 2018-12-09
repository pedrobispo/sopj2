//
// Created by pedro on 07/12/2018.
//

#ifndef PJ2_PROCESS_H
#define PJ2_PROCESS_H


#include <pthread.h>
#include "buffer.h"
#include "robot.h"

class Process {
private:
    pthread_mutex_t thread;


};

robot Process::setRobotRealPosition(int robotId)
{ /*  Trata os valores do vetor 'positions' e define a posicao real de cada robô baseada na media dos valores recebidos   */
    int sumX = 0;
    int sumY = 0;
    int counter = 0;
    robot *pRobot = new robot();

    pthread_mutex_lock(&thread);


    int positions;
    for (int i = 0; i < positions.size(); i++)
    {
        if (positions.at(i).getId() == robotId)

        {
            sumX += positions.at(i).getX(); /*  Pega todas as posicoes X do robo    */
            sumY += positions.at(i).getY(); /*  Pega todas as posicoes Y do robo    */
            counter++;                      /*  Quantidade de robos presente no buffer  */

            positions.erase(positions.begin() + i); /*    Remove do vetor de buffer o robo ja lido    */
            /*  Decrementa i para pode ler a mesma posição do vetor apos a realocação   */
        }
    }
    if (counter != 0)
        pRobot->coord(sumX / counter, sumY / counter); /*  Saindo do laço, ja aloca a média dos valores lidos no robô para saber sua posição real  */

    pthread_mutex_unlock(&thread);

    return *pRobot;
}

#endif //PJ2_PROCESS_H
