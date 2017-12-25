#pragma once

const char JS[] PROGMEM = "function onLoad(){for(var e=document.getElementById(\"cf\"),n=e.getElementsByTagName(\"input\"),t=0,a=n.length;a>t;++t)configs[t]=n[t].value;e.addEventListener(\"animationend\",function(){e.className=\"\"});var o=document.getElementsByTagName(\"h1\")[0];o.addEventListener(\"animationend\",function(){o.className=\"\"})}function animate(){document.getElementById(\"cf\").className=\"animate\",document.getElementsByTagName(\"h1\")[0].className=\"animate\"}function save(){for(var e=new XMLHttpRequest,n=document.getElementById(\"cf\").getElementsByTagName(\"input\"),t=\"\",a=configs,o=0,m=n.length;m>o;++o){var s=n[o];s.value!=configs[o]&&(t+=s.name+\"=\"+s.value+\"&\",a[o]=s.value)}t.length>0&&(e.onreadystatechange=function(){4==e.readyState&&200==e.status&&(configs=a,animate())},e.open(\"POST\",document.URL+\"save\",!0),e.setRequestHeader(\"Content-type\",\"application/x-www-form-urlencoded\"),e.send(t))}var configs=new Array;window.onload=onLoad;"
;

const char CSS[] PROGMEM = "#cf label{color:#FFF;font-size:90%;font-family:'Courier New'}#cf label.p{color:#2ECC9F}h1{color:#fff;font-weight:300}h1.animate{animation:bounce 1s}body{padding-top:30px;background:#25333c;font-family:'Righteous','Titillium Web',sans-serif;font-size:18px}#cf{padding:5px 15px;margin:0 auto;max-width:400px;background:#25333c;font-weight:80}input[type=text]{font-size:80%;width:100%;padding:10px 15px;margin:12px 0;margin-bottom:20px;display:inline-block;border:1px solid #92999d;box-sizing:border-box;color:#92999d;background-color:#25333c}input:focus{outline:none!important;border:1px solid #28b089;box-shadow:0 0 3px #28b089;color:#fff}input[type=submit]{background-color:#292F33;color:#fff;padding:14px 20px;margin:8px 0;border:none;border-radius:4px;cursor:pointer}button{margin-top:20px;border:none;padding:12px 30px;font-size:90%;background:#28b089;color:#FFF;float:right;outline:none}#cf.animate input{animation:flash 1.5s cubic-bezier(0.095,0.905,0.225,0.915)}@keyframes flash{50%{outline:none!important;border:1px solid #28b089;box-shadow:0 0 3px #28b089;color:#fff;transform:scale(1.03,1.03);background-color:#30434f}}@keyframes bounce{0%,20%,60%,100%{transform:translateY(0)}40%{transform:translateY(-4px)}80%{transform:translateY(-2px)}}button:hover{background:#219E7A}button:active{background:#1D8064}div{border-radius:5px;overflow:hidden}"
;
