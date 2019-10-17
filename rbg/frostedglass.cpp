@import url('https://fonts.googleapis.com/css?family=Rajdhani:300&display=swap');

$blur: 20px;
$shadow-opacity: 0.30;
$image: 'https://s3-us-west-2.amazonaws.com/s.cdpn.io/1376484/jess-harding-lqT6NAmTaiY-unsplash.jpg';


body, html {
  height: 100%;
  margin: 0;
  padding: 0;
}


body {
   display: flex;
  justify-content: center;
  align-items: center;
  background-image: url($image);
  background-size: cover;
  background-position: center;
font-family: 'Rajdhani', sans-serif;

}

*, *:before, *:after {
  box-sizing: border-box;
}

.glass {
  height: 100%;
  width: 100%;
   background-image: url($image);
  background-size: cover;
  background-position: center;
  clip-path: inset(10em);
  filter: blur($blur);
  display: flex;
  justify-content: center;
  align-items: center;
}

.drop-shadow {
  height: 100%;
  width: 100%;
filter:  drop-shadow(0px 20px 10px rgba(0, 0, 0, $shadow-opacity));
  display: flex;
  justify-content: center;
  align-items: center;
   &:before {
    display: block;
    content: "";
    position: absolute;
    top: 10em;
     height: calc(100% - 20em);
    width: calc(100% - 20em);
     border-top: 2px solid rgba(225,225,225, 0.2);
    border-left: 1px solid rgba(225,225,225, 0.1);
     border-right: 1px solid rgba(225,225,225, 0.3);
     z-index: 2;
   //  filter: blur(1px);
  }
    
  
  > span {
    position: absolute;
    z-index: 5;
    color: white;
    font-size: 4em;
    letter-spacing: 0.75em;
    padding-left: 0.375em;
  }
}

@media (max-width: 980px) {
  .glass {
     clip-path: inset(5em);
  }
  .drop-shadow {
    &:before {
      top: 5em;
      width: calc(100% - 10em);
    }
    > span {
      font-size: 4em;
    }
  }
}

@media (max-width: 640px) {
  
  .drop-shadow {
    > span {
      font-size: 2em;
    }
  }
}
