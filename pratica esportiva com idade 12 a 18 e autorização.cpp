programa {
  funcao inicio() {

inteiro idade
logico autorizacao


escreva ("Qual sua idade?")
leia (idade)

escreva ("Tem autorização?")
leia (autorizacao)

se (idade >= 12 e idade <= 18 e autorizacao == verdadeiro) {
       escreva("Permitido jogar esporte")
    } senao {
       escreva("Não autorizado a jogar")
    }
    
  }
}
