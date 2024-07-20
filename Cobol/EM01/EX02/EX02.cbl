       IDENTIFICATION DIVISION.
       PROGRAM-ID.     EX02.
       AUTHOR.         GABRIEL GOMES DA CRUZ.
       INSTALLATION.   FATEC-SP.
       DATE-WRITTEN.   05/09/2023.
       DATE-COMPILED.  
       SECURITY.  APENAS O AUTOR PODE MODIFICAR.
      *REMARKS  LE OS REGISTROS DO ARQUIVO DE ENTRADA
      *         CADALU (NUMERO, NOME, SEXO E DATA DE NASCIMENTO) 
      *         E GRAVA NO ARQUIVO DE SAIDA CADATU (NUMERO, NOME 
      *         E DATA DE NASCIMENTO).

       ENVIRONMENT DIVISION. 
       CONFIGURATION SECTION.
       SOURCE-COMPUTER. HP-PC.
       OBJECT-COMPUTER. HP-PC.
       SPECIAL-NAMES.   DECIMAL-POINT IS COMMA.

       INPUT-OUTPUT SECTION.
       FILE-CONTROL.
           SELECT CADALU ASSIGN TO DISK ORGANIZATION
            IS LINE SEQUENTIAL.
           SELECT CADATU ASSIGN TO DISK ORGANIZATION
            IS LINE SEQUENTIAL.
       
       DATA DIVISION.
       FILE SECTION. 
           FD CADALU LABEL RECORD ARE STANDARD 
            VALUE OF FILE-ID IS "CADALU.DAT".
           01 REG-ENT.
           02 NUM-ENT         PIC 9(05).
           02 NOME-ENT        PIC X(20).
           02 SEXO-ENT        PIC X(01).
           02 DATA-NASCIMENTO-ENT.
           03 DIA-NASCIMENTO-ENT PIC 9(02).
           03 MES-NASCIMENTO-ENT PIC 9(02).
           03 ANO-NASCIMENTO-ENT PIC 9(04).

           FD CADATU LABEL RECORD ARE STANDARD 
            VALUE OF FILE-ID IS "CADATU.DAT".
           01 REG-SAI.
           02 NUM-SAI         PIC 9(05).
           02 NOME-SAI        PIC X(20).
           02 DATA-NASCIMENTO-SAI.
           03 DIA-NASCIMENTO-SAI PIC 9(02).
           03 MES-NASCIMENTO-SAI PIC 9(02).
           03 ANO-NASCIMENTO-SAI PIC 9(04).

       WORKING-STORAGE SECTION.
       77 FIM-ARQ PIC X(03) VALUE "NAO".

       PROCEDURE DIVISION.
       PGM-EX02.
           PERFORM INICIO.
           PERFORM PRINCIPAL UNTIL FIM-ARQ EQUAL "SIM".
           PERFORM TERMINO.
           STOP RUN.
       
       INICIO.
           OPEN INPUT CADALU OUTPUT CADATU.
           PERFORM LEITURA.

       LEITURA.
           READ CADALU AT END MOVE "SIM" TO FIM-ARQ.
       
       PRINCIPAL.
           PERFORM GRAVACAO.
           PERFORM LEITURA.

       GRAVACAO.
           MOVE NUM-ENT TO NUM-SAI.
           MOVE NOME-ENT TO NOME-SAI.
           MOVE DATA-NASCIMENTO-ENT TO DATA-NASCIMENTO-SAI.
           WRITE REG-SAI.

       TERMINO.
           CLOSE CADALU CADATU. 