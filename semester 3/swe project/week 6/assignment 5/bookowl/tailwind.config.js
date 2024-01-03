/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ['./**/templates/*.html', './node_modules/flowbite/**/*.js', './accounts/templates/*.html'],
  theme: {
    extend: {},
  },
  plugins: [require('flowbite/plugin'), require("daisyui")],
  daisyui: { 
    themes: ["light"]

  }
}

