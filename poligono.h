#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

///
/// @brief Polígono é a classe que representa um polígono.
///
class Poligono : public Point{
    ///
    /// @brief nvertices número de vertices que terá o polígono.
    ///
    int nvertices = 0;
    ///
    /// @brief pol Vetor que guardará os vértices do polígono.
    ///
    Point *pol = new Point[100];
public:
    ///
    /// @brief Poligono é o construtor defaut da classe.
    ///
    Poligono();
    ///
    /// @brief addvertices Função que adiciona os vértices do polígono
    /// @param x Valor da variável x do vértice.
    /// @param y Valor da variável  y do vértice.
    ///
    void addvertices(float x, float y);
    ///
    /// @brief qtdvertices Função que guarda a quantidade de vértices do polígono.
    /// @return Retorna o número de vértices que tem o polígono.
    ///
    int qtdvertices();
    ///
    /// @brief area Função que calcula a área do polígono.
    /// @return Retorna o valor da área.
    ///
    float area();
    ///
    /// @brief transladap Função que translada o polígono, adicionando um valor a coordenada x e outro a coordenada y;
    /// @param a Valor que será adicionado em x;
    /// @param b Valor que será adicionado em y;
    ///
    void transladap(float a, float b);
    ///
    /// \brief imprimep Imprime o polígono formado.
    ///
    void imprimep();

};

#endif // POLIGONO_H
