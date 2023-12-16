/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
    './templates/**/*.html', 
    './buyer/templates/**/*.html', 
    './car/templates/**/*.html', 
    './comment/templates/**/*.html', 
    './brand/templates/**/*.html', 
    './node_modules/flowbite/**/*.js'
  ],
  theme: {
    extend: {},
  },
  plugins: [
    require('flowbite/plugin'),
    require("daisyui"),
  ],
  daisyui: {
    themes: ["light"],
  },
}

