programa {
  funcao inicio() {
    // Declaração das variáveis
    cadeia cadastro, login
    logico senha_correta = falso

    escreva("Cadastro e validação de senha\n")
    
    escreva("Cadastre sua senha: ")
    leia(cadastro)
    
    escreva("Digite sua senha para entrar: ")
    leia(login)

    // Validação da senha
    se (login == cadastro) {
      senha_correta = verdadeiro
    }

    // Verificação do acesso
    se (senha_correta == verdadeiro) {
      escreva("Acesso permitido\n")
    } senao {
      escreva("Acesso negado\n")
    }
  }
}

