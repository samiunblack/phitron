/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
    './**/**/*.html',
    './review/templates/*.html',
    './node_modules/flowbite/**/*.js'
  ],
  theme: {
    extend: {
      fontSize: {
        '5xl': '30px',
      },
      fontFamily: {
        body: ['Inter']
      },
      colors: {
        'brown': '#450a0a'
      }
    },
  },
  plugins: [
    require('flowbite/plugin')
  ],
}

