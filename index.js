const wasm = require('./src/wasm.js');
wasm.onRuntimeInitialized = () => {
    console.log(wasm.helloWorld());
}
module.exports = wasm;
