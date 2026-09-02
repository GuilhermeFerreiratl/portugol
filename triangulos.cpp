programa {
  funcao inicio() {

    inteiro quantLados
    real lado1, lado2, lado3, lado4

    escreva("Quantos lados tem a forma geométrica? (3 ou 4): ")
    leia(quantLados)

    // Condição para Triângulos
    se (quantLados == 3) {
      escreva("Digite o tamanho do primeiro lado: ")
      leia(lado1)
      escreva("Digite o tamanho do segundo lado: ")
      leia(lado2)
      escreva("Digite o tamanho do terceiro lado: ")
      leia(lado3)

      se (lado1 == lado2 e lado2 == lado3) {
        escreva("Triângulo Equilátero (3 lados iguais)")
      }
      senao se (lado1 == lado2 ou lado1 == lado3 ou lado2 == lado3) {
        escreva("Triângulo Isósceles (2 lados iguais)")
      }
      senao {
        escreva("Triângulo Escaleno (todos os lados diferentes)")
      }
    }
    // Condição para Quadrados / Quadriláteros
    senao se (quantLados == 4) {
      escreva("Digite o tamanho do primeiro lado: ")
      leia(lado1)
      escreva("Digite o tamanho do segundo lado: ")
      leia(lado2)
      escreva("Digite o tamanho do terceiro lado: ")
      leia(lado3)
      escreva("Digite o tamanho do quarto lado: ")
      leia(lado4)

      se (lado1 == lado2 e lado2 == lado3 e lado3 == lado4) {
        escreva("É um Quadrado (4 lados iguais)")
      }
      senao {
        escreva("É outro tipo de quadrilátero (lados diferentes)")
      }
    }
    senao {
      escreva("Quantidade de lados inválida. Escolha 3 ou 4.")
    }

  }
}
