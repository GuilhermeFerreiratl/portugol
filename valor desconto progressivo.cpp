print ("====Desconto progressimo:Compra====\n")
def main() :
  valorcompra = float (input ( "valor da compra: R$ "))
  valorfinal = valordesconto (valorcompra)
  print ("Valor final com desconto R$",valorfinal)

def valordesconto (valorcompra):

 if valorcompra >= 100 and valorcompra <= 299:
  return valorcompra * 0.90

 elif valorcompra >= 300 and valorcompra <=499:
  return valorcompra *0.85

 elif valorcompra >= 500:
  return valorcompra *0.80

 else:
  return valorcompra

main()


