#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

///
/// @brief A classe Retangulo, herdeira da classe Poligono, forma um retangulo a partir do vértice superior esquerdo.
///
class Retangulo:public Poligono
{
public:
    ///
    /// \brief Retangulo Construtor da classe.
    /// \param x Coordenada x do vértice superior esquerdo.
    /// \param y Coordenada y do vértice superior esquerdo
    /// \param largura Largura do retangulo
    /// \param altura Altura do retangulo.
    ///
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
