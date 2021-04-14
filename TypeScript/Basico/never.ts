// Função que sempre lança um erro:
function error(): never {
    throw new Error('Something went wrong!')
  };
  
  // Função com um fim inalcançável 
  function Loop() {
    while(true) {
      console.log('I always do something and never end')
    }
  }
  