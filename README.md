# dadm-cpp
Projekt na Dedykowane algorytmy diagnostyki medycznej

W celu poprawnego skonfigurowania programu do pliku ECGAnalyzer naeży dołączyć na końcu
LIBS+= "PATHTOFILE\libfftw3-3.dll"
PATHTOFILE jest scieżką libfftw3-3.dll znajdującego się w folderze src/build-ECGAnalyzer-Desktop_Qt_5_14_0_MinGW_64_bit-Debug.

#DFA Żeby moduł DFA działał należy ściągnąć biblioteke:http://eigen.tuxfamily.org/index.php?title=Main_Page, wersje 3.3.7, odpakować i wkleić folder Eigen do folderu na komputer. Dodać ścieżke do projektu ECGAnalyzer.pro. Przykład poniżej (folder Eigen znajduję się w folderze dependencies). INCLUDEPATH += "C:\Users\Daria AKIN\Desktop\dependencies"
