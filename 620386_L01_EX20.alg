
inicio

    INTEIRO numero1, numero2, n_soma, n_subtra��o, n_multiplica��o, n_divisao, escolha

      ESCREVER "Escolha a opera��o a ser realizada: \n1 - Soma \n2 - Subtra��o \n3 - Multiplica��o \n4 - Divis�o \n"
      LER escolha
      
            SE escolha = 1 ENTAO
                ESCREVER "A escolha selecionada foi a 1 - SOMA "
                      
            SENAO 
                ESCREVER "  " 
            FIMSE
            
            SE escolha = 2 ENTAO
                ESCREVER "A escolha selecionada foi a 2 - Subtra��o "
                
            SENAO               
                ESCREVER "  "
                  
            FIMSE
            
            SE escolha = 3 ENTAO 
                ESCREVER "A escolha selecionada foi a 3 - Multiplica��o "
            
            SENAO
                ESCREVER "  "
            
            FIMSE
            
            SE escolha = 4 ENTAO
                ESCREVER "A escolha selecionada foi a 4 - Divis�o "
                
            SENAO
                ESCREVER "  "
                
            FIMSE     
              
            SE escolha > 4 ENTAO
              ESCREVER "Impossivel realizar a opera��o. O n�meros devem ser apenas 1, 2, 3 ou 4. "
              
          SENAO 
              ESCREVER "\nInforme os valores que deseja para resolver as opera��es: "
              LER numero1, numero2
          FIMSE         
      
      SE escolha = 1 ENTAO
               
      n_soma <- numero1 + numero2
          ESCREVER "O resultado da soma �: ", n_soma         

      FIMSE
      
      SE escolha = 2 ENTAO                  
      
      n_subtra��o <- numero1 - numero2
          ESCREVER "O resultado da subtra��o �: ", n_subtra��o
      FIMSE
      
      SE escolha = 3 ENTAO
      
      n_multiplica��o <- numero1 * numero2
          ESCREVER "O resultado da multiplica��o �: ", n_multiplica��o
      FIMSE
      
      SE escolha = 4 ENTAO
      
      n_divisao <- numero1 / numero2
      
          SE numero2 > numero1 ENTAO 
                  ESCREVER "IMPOSSIVEL REALIZAR A OPERA��O. Denominador n�o � divisivel pelo Divisor no conjunto dos inteiros. " 
              FIMSE
               
              SENAO        
               ESCREVER "O resultado da divis�o �: ", n_divisao
                                         
     FIMSE
     
                                          
                                                
fim

