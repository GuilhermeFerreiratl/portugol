programa {
  funcao inicio() {
    
inteiro opcao
cadeia pagamento

escreva("=====Opções de Pagamento=====\n")
escreva ("1 - dinheiro \n")
escreva ("2 - Cartão de Credito \n")
escreva ("3 - Cartão de Debito \n")
escreva ("4 - pix \n")
escreva ("5 - Boleto \n")

escreva("Qual forma de Pagamento? \n")
leia(opcao)

pagamento = escolhapagamento (opcao)

escreva("Forma de pagamento escolhida: ",pagamento)






    }

  funcao cadeia escolhapagamento(inteiro opcao) {
escolha (opcao){

caso 1:
retorne "Dinheiro"
caso 2:
retorne "Cartão credito"
caso 3:
retorne "Cartão de debito"
caso 4:
retorne "Pix"
caso 5:
retorne "Boleto"
caso contrario:
retorne "opção invalida"

}


  }


    
  }
