print ("======opções escolha de pagamento=======")
def main ():
  print ("1-Dinheiro")
  print ("2 - Debito")
  print ("3 - Credito")
  print ("4 - Pix")
  print ("5 - Boleto")
  opcao = int (input (" Escolha forma de pagamento:"))
  pagamento = escolhapagamento (opcao)
  print ("Forma de pagamento escolhido: ", pagamento)

def escolhapagamento (opcao):
      if opcao == 1:
        return "Dinheiro"
      elif opcao == 2 :
        return "debito"
      elif opcao == 3 :
        return "Credito"
      elif opcao == 4 :
        return "Pix"
      elif opcao == 5 :
        return "Boleto"
      else :
        return "Opçao invalida"

main()
