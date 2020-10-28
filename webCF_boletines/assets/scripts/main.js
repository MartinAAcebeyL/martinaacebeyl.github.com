//DOM
//devuelve un elemento

/*console.log("hola mundo")
let tabla = document.querySelector('.table');
console.log(tabla)
*/

//devuelve todos los elemento
/*let links = document.querySelectorAll('a');
//console.log(links);
links.forEach(function(link){
    console.log(link);
});

*/
/*
let celdas = document.querySelectorAll('td');
//console.log(links);
celdas.forEach(function(td){
    td.addEventListener('click',function(){
        console.log(this);
    })
});*/

let links = document.querySelectorAll('.close');

links.forEach(function(link){
    link.addEventListener('click',function(ev){
        ev.preventDefault();//anula la redireccion a otra parte

        let content = document.querySelectorAll('.content');
        
        content.classList.remove('animate__backInDown');
        content.classList.remove('animate__animated');
          
        content.classList.add('animate__backOutDown');
        content.classList.add('animate__animated');

        setTimeout(function(){
            location.href='/webCF_boletines';
        }, 2000);

        /*setInterval(() => {//cada periodo tiempo
            
        }, interval);*/
        

        return false;
    });
});

/*let iconos = document.querySelectorAll('i');

iconos.forEach(function(icon){
    icon.classList.remove('fa-star');
    icon.classList.add("fa-asterisk");
});*/