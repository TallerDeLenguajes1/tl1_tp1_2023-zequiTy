# tl1_tp1_2023-zequiTy
#gitignore
-  Conveniencia
   
    Es conveniente utilizarlo a la hora de querer ignorar arquivos y carpetas de un proyecto.

- Cuando hacerlo..

    Se debe realizarlo cuando **necesitamos** optimizar recursos de un proyecto.

- Configuracion del archivo .gitignore

    Crear el archivo

        Para crear el archivo .gitignore, crea un archivo de texto y llamalo .gitignore(incuir . al principio). Cada linea nueva deberia contener el archivo ocarpeta que queremos que git ignore.

        Para ello, debemos seguir las siguientes reglas:

        - Usar * para encontrar coincidencias.
        - Usar / para ignorar nombres de ruta relacionados con el archivo .gitignore.
        - Usar # para agregar comentarios al archivo.

- Ejemplo en lenguaje c.

  ### C ###
## Prerequisites
*.d

## Object files
*.o
*.ko
*.obj
*.elf

## Linker output
*.ilk
*.map
*.exp

## Precompiled Headers
*.gch
*.pch

## Libraries
*.lib
*.a
*.la
*.lo

# Shared objects (inc. Windows DLLs)
*.dll
*.so
*.so.*
*.dylib

# Executables
*.exe
*.out
*.app
*.i*86
*.x86_64
*.hex

## Debug files
*.dSYM/
*.su
*.idb
*.pdb
 


 ## Respuesta punto 3 apartado g

 - El hecho de que el el punto 2 y 3 impriman la misma direccion de memoria por pantalla se debe a que el puntero es una variable que apunta a la direccion de memoria de otra variable, es decir que le asignamos al puntero la direccion de memoria de la variable.  
   
      **puntero = &variable**

- En el punto cuatro obtengo la direccion de memoria del puntero, distinta a las obtenidas en los puntos anteriores, ya que contenido del puntero es la direccion de memoria de la variable que su vez dicho puntero tiene su propia direccion de memoria.

