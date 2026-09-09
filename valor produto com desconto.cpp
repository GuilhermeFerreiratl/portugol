programa {
  funcao inicio() {
real valorproduto
real valorcomdesconto

escreva("Qual valor do produto \n")
leia (valorproduto)

valorcomdesconto = valorreal (valorproduto)

    escreva ("valor com desconto \n", valorcomdesconto)
  }

funcao real valorreal(real valorproduto){

se (valorproduto >=100 e valorproduto <300){
retorne valorproduto * 0.9}

senao se (valorproduto >=300 e valorproduto <500){
retorne valorproduto * 0.85}

senao se (valorproduto >=500){
retorne valorproduto * 0.8}

senao {
  retorne valorproduto
}
}

}
