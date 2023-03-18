# tl1_tp1_2023-zequiTy
#.gitignore
-  ##Conveniencia
   
    Es conveniente utilizarlo a la hora de querer ignorar arquivos y carpetas de un proyecto.

- ##Cuando hacerlo..

    Se debe realizarlo cuando **necesitamos** optimizar recursos de un proyecto.

- ##Configuracion del archivo .gitignore

    ###Crear el archivo

        Para crear el archivo .gitignore, crea un archivo de texto y llamalo .gitignore(incuir . al principio). Cada linea nueva deberia contener el archivo ocarpeta que queremos que git ignore.

        Para ello, debemos seguir las siguientes reglas:

        - Usar * para encontrar coincidencias.
        - Usar / para ignorar nombres de ruta relacionados con el archivo .gitignore.
        - Usar # para agregar comentarios al archivo.

- ##Ejemplo en lenguaje c.

  ### C ###
# Prerequisites
*.d

# Object files
*.o
*.ko
*.obj
*.elf

# Linker output
*.ilk
*.map
*.exp

# Precompiled Headers
*.gch
*.pch

# Libraries
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

# Debug files
*.dSYM/
*.su
*.idb
*.pdb
 