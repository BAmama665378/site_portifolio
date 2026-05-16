async function runWasm() {
  try {
    // Carrega o arquivo compilado vetores.wasm
    const response = await fetch('vetores.wasm');
    const bytes = await response.arrayBuffer();

    // Instancia o módulo WebAssembly
    const result = await WebAssembly.instantiate(bytes, {
      env: {
        // Exemplo de função auxiliar para saída
        print: (value) => {
          document.getElementById("output").textContent += value + "\n";
        }
      }
    });

    // Executa a função main exportada
    result.instance.exports.main();
    document.getElementById("output").textContent += "\nPrograma em C rodado com sucesso!";
  } catch (err) {
    document.getElementById("output").textContent = "Erro ao rodar programa: " + err;
  }
}
