Remove-Item -Recurse -Force .\build\
New-Item -Type Directory build
Set-Location .\build\
cmake -G "Visual Studio 16 2019" ..\source\
cmake --build . --target SimulateInputsDll --config Release
cmake --build . --target SimulateInputsLib --config Release
cmake --build . --target SimulateInputsBin --config Release
Set-Location .\..