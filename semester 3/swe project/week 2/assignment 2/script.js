const contents = document.getElementById("content-container")
const categories = document.getElementById("categories-container")
let increase = true

let data = null

fetchData(1000)

fetch("https://openapi.programming-hero.com/api/videos/categories")
.then(res => res.json())
.then(doc => {
    doc.data.forEach(element => {
        const categoryDiv = document.createElement("div")
        categoryDiv.className = 'category'
        categoryDiv.addEventListener("click", () => {

            fetchData(element.category_id)
            increase = true
        })

        categoryDiv.innerHTML =
        `<div class="bg-rose-600 w-20 mt-4 py-2 text-center text-slate-50 rounded">
            ${element.category}
        </div>`

        categories.appendChild(categoryDiv)
    })
})



function fetchData(id)
{
    contents.innerHTML = ''
    fetch(`https://openapi.programming-hero.com/api/videos/category/${id}`)
    .then(res => res.json())
    .then(doc => {
        data = doc.data
        if(doc.status == false)
        {
            data = null
            contents.innerHTML = `
            <div class="flex items-center" style="margin: auto">
                <div class="flex flex-col items-center justify-center gap-6">
                    <img src="images/Icon.png" alt="not found"/>
                    <h1 class="text-4xl font-bold">Oops!!Sorry, There is no content here</h1>
                </div>
            </div>
            `
            return
        }
        doc.data.forEach(element => {
            const videoDiv = document.createElement("div")
            videoDiv.className = 'video relative'
            videoDiv.style.width = "312px"
            videoDiv.style.height = "325px"
            videoDiv.innerHTML = 
            `<img src="${element.thumbnail}" alt="thumbnail" style="width:312px; height:200px; display:block">
                <div class="video-data flex gap-2 mt-3">
                    <img src="${element.authors[0].profile_picture}" alt="pfp" style="width:40px; height:40px; border-radius:50%;">
                    <div class="video-texts">
                        <h3 class="font-bold" >${element.title}</h3>
                        <div class="flex items-center h-max gap-2">
                            <small class="text-gray-500">${element.authors[0].profile_name}</small>
                            ${(element.authors[0].verified == true) ? `<i class="fa-solid fa-circle-check text-blue-500"></i>` : '<p></p>'}
                        </div>
                        <small class="text-gray-500">${element.others.views} Views</small>
                        ${(element.others.posted_date != '') ? `<small class="block">
                        ${(msToTime(parseInt(element.others.posted_date))[0] != 0) ? msToTime(parseInt(element.others.posted_date))[0] + " hours " : ""}
                        ${(msToTime(parseInt(element.others.posted_date))[1] != 0) ? msToTime(parseInt(element.others.posted_date))[0] + " minutes " : ""}
                        ${(msToTime(parseInt(element.others.posted_date))[2] != 0) ? msToTime(parseInt(element.others.posted_date))[2] + " seconds " : ""}
                        ago
                        </small>` : '<p></p>'}
                    </div>
                </div>`
            contents.appendChild(videoDiv)
        });
    })

    
}

function sortByView()
{
    if(data == null) 
    {
        return
    }
    if(increase == true)
    {
        increase = false
        data.sort((a, b) => {
            aViews = a.others.views 
            aViews.slice(0, -1)
            bViews = b.others.views
            bViews.slice(0, -1)
            a = parseFloat(aViews)
            b = parseFloat(bViews)
            
            if(a < b) return 1
            else if(a > b) return -1
            else return 0
        })
    }
    else
    {
        increase = true
        data.sort((a, b) => {
            aViews = a.others.views 
            aViews.slice(0, -1)
            bViews = b.others.views
            bViews.slice(0, -1)
            a = parseFloat(aViews)
            b = parseFloat(bViews)
            
            if(a > b) return 1
            else if(a < b) return -1
            else return 0
        })
        
    }

    contents.innerHTML = ''
    data.forEach(element => {
        const videoDiv = document.createElement("div")
        videoDiv.className = 'video relative'
        videoDiv.style.width = "312px"
        videoDiv.style.height = "325px"
        videoDiv.innerHTML = 
        `<img src="${element.thumbnail}" alt="thumbnail" style="width:312px; height:200px; display:block">
            <div class="video-data flex gap-2 mt-3">
                <img src="${element.authors[0].profile_picture}" alt="pfp" style="width:40px; height:40px; border-radius:50%;">
                <div class="video-texts">
                    <h3 class="font-bold" >${element.title}</h3>
                    <div class="flex items-center h-max gap-2">
                        <small class="text-gray-500">${element.authors[0].profile_name}</small>
                        ${(element.authors[0].verified == true) ? `<i class="fa-solid fa-circle-check text-blue-500"></i>` : '<p></p>'}
                    </div>
                    <small class="text-gray-500">${element.others.views} Views</small>
                    ${(element.others.posted_date != '') ? `<small class="block">
                    ${(msToTime(parseInt(element.others.posted_date))[0] != 0) ? msToTime(parseInt(element.others.posted_date))[0] + " hours " : ""}
                    ${(msToTime(parseInt(element.others.posted_date))[1] != 0) ? msToTime(parseInt(element.others.posted_date))[0] + " minutes " : ""}
                    ${(msToTime(parseInt(element.others.posted_date))[2] != 0) ? msToTime(parseInt(element.others.posted_date))[2] + " seconds " : ""}
                    ago
                    </small>` : '<p></p>'}
                </div>
            </div>`
        contents.appendChild(videoDiv)
    });

}

function msToTime(s) {

    // Pad to 2 or 3 digits, default is 2
    function pad(n, z) {
      z = z || 2;
      return ('00' + n).slice(-z);
    }
  
    var ms = s % 1000;
    s = (s - ms) / 1000;
    var secs = s % 60;
    s = (s - secs) / 60;
    var mins = s % 60;
    var hrs = (s - mins) / 60;
    
    return [pad(hrs), pad(mins), pad(secs), pad(ms, 3)]
  }
  