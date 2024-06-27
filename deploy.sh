mkdir deployment
cp -r CSS ./deployment
cp ./build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/TIC_TAC_TOE_FINAL.exe ./deployment/game.exe
cd C:/Qt/6.7.0/mingw_64/bin
./windeployqt.exe "C:/Users/Spectra/Desktop/TIC_TAC_TOE_FINAL/TIC_TAC_TOE_FINAL/deployment/game.exe"