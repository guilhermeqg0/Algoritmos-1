
inicio

    INTEIRO numero1, numero2, n_soma, n_subtração, n_multiplicação, n_divisao, escolha

      ESCREVER "Escolha a operação a ser realizada: \n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n"
      LER escolha
      
            SE escolha = 1 ENTAO
                ESCREVER "A escolha selecionada foi a 1 - SOMA "
                      
            SENAO 
                ESCREVER "  " 
            FIMSE
            
            SE escolha = 2 ENTAO
                ESCREVER "A escolha selecionada foi a 2 - Subtração "
                
            SENAO               
                ESCREVER "  "
                  
            FIMSE
            
            SE escolha = 3 ENTAO 
                ESCREVER "A escolha selecionada foi a 3 - Multiplicação "
            
            SENAO
                ESCREVER "  "
            
            FIMSE
            
            SE escolha = 4 ENTAO
                ESCREVER "A escolha selecionada foi a 4 - Divisão "
                
            SENAO
                ESCREVER "  "
                
            FIMSE     
              
            SE escolha > 4 ENTAO
              ESCREVER "Impossivel realizar a operação. O números devem ser apenas 1, 2, 3 ou 4. "
              
          SENAO 
              ESCREVER "\nInforme os valores que deseja para resolver as operações: "
              LER numero1, numero2
          FIMSE         
      
      SE escolha = 1 ENTAO
               
      n_soma <- numero1 + numero2
          ESCREVER "O resultado da soma é: ", n_soma         

      FIMSE
      
      SE escolha = 2 ENTAO                  
      
      n_subtração <- numero1 - numero2
          ESCREVER "O resultado da subtração é: ", n_subtração
      FIMSE
      
      SE escolha = 3 ENTAO
      
      n_multiplicação <- numero1 * numero2
          ESCREVER "O resultado da multiplicação é: ", n_multiplicação
      FIMSE
      
      SE escolha = 4 ENTAO
      
      n_divisao <- numero1 / numero2
      
          SE numero2 > numero1 ENTAO 
                  ESCREVER "IMPOSSIVEL REALIZAR A OPERAÇÃO. Denominador não é divisivel pelo Divisor no conjunto dos inteiros. " 
              FIMSE
               
              SENAO        
               ESCREVER "O resultado da divisão é: ", n_divisao
                                         
     FIMSE
     
                                          
                                                
fim

