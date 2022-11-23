# Directory Structure

The directory structure of the UI is as follows:

```
X. Project Name
├───/assets
│   ├───/fonts
│   ├───/images
│   └───/styles
├───index.html
├───style.css
└───/scripts
    ├───/components
    ├───/pages
    └───/utils
```

This script section will hold all the various helper functions that will be used throughout the project. If theres a single script, there would be no need for a separate folder.

---

# Template for Project

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <link rel="stylesheet" href="style.css" />
    <!-- Favicons -->
    <link rel="icon" href="./assets/favicon.png" />
    <title>PROJECT NAME</title>
  </head>
  <body>
    <h1>PROJECT NAME</h1>
    <script src="script.js"></script>
  </body>
</html>
```

```css
@import url(https://fonts.googleapis.com/css?family=Roboto:wght@400;700&display=swap);

* {
  box-sizing: border-box;
  font-size: 62.5%;
}

body {
  font-family: "Roboto", sans-serif;
  background: linear-gradient(45deg, #3f3f3f, #141111);
  display: flex;
  align-items: center;
  justify-content: center;
  height: 100vh;
  overflow: hidden;
  margin: 0;
}
```

---

# Fonts

| Websites                                          | Description                                                                                                                   |
| :------------------------------------------------ | :---------------------------------------------------------------------------------------------------------------------------- |
| [Google Fonts](https://fonts.google.com/)         | Google Fonts is a library of 1000+ free licensed font families and APIs for conveniently using the fonts via CSS and Android. |
| [cdnjs](https://cdnjs.com/libraries/font-awesome) | The best FOSS CDN for web related libraries to speed up your websites!                                                        |
