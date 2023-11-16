const sections = document.querySelectorAll("section");
const navLi = document.querySelectorAll("nav .menus-container .option");
const viewportHeight = window.innerHeight;

window.onscroll = () => {
  var current = "";
  sections.forEach((section) => {
    const sectionTop = section.offsetTop;
    const sectionBottom = sectionTop + section.clientHeight;
    if (scrollY >= sectionTop - 60 && scrollY <= sectionBottom) {
      if(section.getAttribute("id") == "skills")
      {
        if(scrollY + viewportHeight >= sectionTop + 1300)
        {
          current = "links"
        }
        else{
          current = "skills"
        }
      }
      else{
        current = section.getAttribute("id");
      }
      
    }
    
  });

  navLi.forEach((div) => {
    if (current == "")
    {
        current = "projects"
    }
    div.classList.remove("active");
    if (div.classList.contains(current)) {
      div.classList.add("active");
    }
  });
};
